//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/WKWebView.h>

#import "GBTThemeable-Protocol.h"

@class NSString;

@interface GBTComposeWKWebView : WKWebView <GBTThemeable>
{
    struct CGPoint _touchPoint;
}

@property(nonatomic) struct CGPoint touchPoint; // @synthesize touchPoint=_touchPoint;
- (void)gbt_applyTheme:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

