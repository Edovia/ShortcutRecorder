//
//  PTHotKey.h
//  Protein
//
//  Created by Quentin Carnicelli on Sat Aug 02 2003.
//  Copyright (c) 2003 Quentin D. Carnicelli. All rights reserved.
//
//  Contributors:
// 		Andy Kim

#import <Foundation/Foundation.h>
#import <Carbon/Carbon.h>
#import "PTKeyCombo.h"

@interface PTHotKey : NSObject
{
	NSString*		mIdentifier;
	NSString*		mName;
	PTKeyCombo*		mKeyCombo;
	id				mTarget;
    id              mObject;
	SEL				mAction;
    SEL             mKeyUpAction;

	UInt32		    mCarbonHotKeyID;
	EventHotKeyRef	mCarbonEventHotKeyRef;
}

- (instancetype)initWithIdentifier: (id)identifier keyCombo: (PTKeyCombo*)combo;
- (instancetype)initWithIdentifier: (id)identifier keyCombo: (PTKeyCombo*)combo withObject: (id)object NS_DESIGNATED_INITIALIZER;
- (instancetype)init;

@property (NS_NONATOMIC_IOSONLY, strong) id identifier;

@property (NS_NONATOMIC_IOSONLY, copy) NSString *name;

@property (NS_NONATOMIC_IOSONLY, copy) PTKeyCombo *keyCombo;

@property (NS_NONATOMIC_IOSONLY, assign) id target;
@property (NS_NONATOMIC_IOSONLY, strong) id object;
@property (NS_NONATOMIC_IOSONLY) SEL action;
@property (NS_NONATOMIC_IOSONLY) SEL keyUpAction;

@property (NS_NONATOMIC_IOSONLY) UInt32 carbonHotKeyID;

@property (NS_NONATOMIC_IOSONLY) EventHotKeyRef carbonEventHotKeyRef;

- (void)invoke;
- (void)uninvoke;

@end
