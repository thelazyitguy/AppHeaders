//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class NSString, UIColor, UIFont;

@interface SPTLoginTextFieldStyle : NSObject <GLUEStyle>
{
    _Bool _errorOutlineEnabled;
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_invalidTextColor;
    UIColor *_backgroundColor;
    UIColor *_onFocusBackgroundColor;
    UIColor *_invalidBackgroundColor;
    double _cornerRadius;
    double _textMargin;
    long long _textAlignment;
    long long _keyboardAppearance;
    UIColor *_passwordToggleTintColor;
    UIColor *_invalidPasswordToggleTintColor;
    long long _numberOfLines;
    struct CGSize _rightViewSize;
}

- (void).cxx_destruct;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(retain, nonatomic) UIColor *invalidPasswordToggleTintColor; // @synthesize invalidPasswordToggleTintColor=_invalidPasswordToggleTintColor;
@property(retain, nonatomic) UIColor *passwordToggleTintColor; // @synthesize passwordToggleTintColor=_passwordToggleTintColor;
@property(nonatomic, getter=isErrorOutlineEnabled) _Bool errorOutlineEnabled; // @synthesize errorOutlineEnabled=_errorOutlineEnabled;
@property(nonatomic) long long keyboardAppearance; // @synthesize keyboardAppearance=_keyboardAppearance;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) struct CGSize rightViewSize; // @synthesize rightViewSize=_rightViewSize;
@property(nonatomic) double textMargin; // @synthesize textMargin=_textMargin;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *invalidBackgroundColor; // @synthesize invalidBackgroundColor=_invalidBackgroundColor;
@property(retain, nonatomic) UIColor *onFocusBackgroundColor; // @synthesize onFocusBackgroundColor=_onFocusBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *invalidTextColor; // @synthesize invalidTextColor=_invalidTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
