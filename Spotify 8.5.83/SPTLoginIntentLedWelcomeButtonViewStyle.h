//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUEButtonStyle, NSString;

@interface SPTLoginIntentLedWelcomeButtonViewStyle : NSObject <GLUEStyle>
{
    GLUEButtonStyle *_loginButtonStyle;
    GLUEButtonStyle *_signupButtonStyle;
    double _betweenButtonsMargin;
}

- (void).cxx_destruct;
@property(nonatomic) double betweenButtonsMargin; // @synthesize betweenButtonsMargin=_betweenButtonsMargin;
@property(copy, nonatomic) GLUEButtonStyle *signupButtonStyle; // @synthesize signupButtonStyle=_signupButtonStyle;
@property(copy, nonatomic) GLUEButtonStyle *loginButtonStyle; // @synthesize loginButtonStyle=_loginButtonStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

