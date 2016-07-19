//
//  PTKeyCombo.h
//  Protein
//
//  Created by Quentin Carnicelli on Sat Aug 02 2003.
//  Copyright (c) 2003 Quentin D. Carnicelli. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface PTKeyCombo : NSObject <NSCopying>
{
	NSInteger	mKeyCode;
	NSUInteger	mModifiers;
}

+ (id)clearKeyCombo;
+ (instancetype)keyComboWithKeyCode: (NSInteger)keyCode modifiers: (NSUInteger)modifiers;
- (instancetype)initWithKeyCode: (NSInteger)keyCode modifiers: (NSUInteger)modifiers NS_DESIGNATED_INITIALIZER;

- (instancetype)initWithPlistRepresentation: (id)plist;
@property (NS_NONATOMIC_IOSONLY, readonly, strong) id plistRepresentation;

- (BOOL)isEqual: (PTKeyCombo*)combo;

@property (NS_NONATOMIC_IOSONLY, readonly) NSInteger keyCode;
@property (NS_NONATOMIC_IOSONLY, readonly) NSUInteger modifiers;

@property (NS_NONATOMIC_IOSONLY, getter=isClearCombo, readonly) BOOL clearCombo;
@property (NS_NONATOMIC_IOSONLY, getter=isValidHotKeyCombo, readonly) BOOL validHotKeyCombo;

@end


@interface PTKeyCombo (UserDisplayAdditions)
@property (NS_NONATOMIC_IOSONLY, readonly, copy) NSString *keyCodeString;
@property (NS_NONATOMIC_IOSONLY, readonly) NSUInteger modifierMask;
@end
