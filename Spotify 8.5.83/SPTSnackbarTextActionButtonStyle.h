//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class NSString, UIColor, UIFont;

@interface SPTSnackbarTextActionButtonStyle : NSObject <GLUEStyle>
{
    UIColor *_normalTextColor;
    UIColor *_highlightedTextColor;
    UIColor *_disabledTextColor;
    UIColor *_backgroundColor;
    UIFont *_textFont;
}

- (void).cxx_destruct;
@property(copy, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) UIColor *disabledTextColor; // @synthesize disabledTextColor=_disabledTextColor;
@property(copy, nonatomic) UIColor *highlightedTextColor; // @synthesize highlightedTextColor=_highlightedTextColor;
@property(copy, nonatomic) UIColor *normalTextColor; // @synthesize normalTextColor=_normalTextColor;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

