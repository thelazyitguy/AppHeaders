//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTResponderEvent.h>

@class GRWLinkOpenerOptions, NSData, NSURL, UIView;

@interface YTOpenURLResponderEvent : YTResponderEvent
{
    _Bool _shouldResolve;
    NSURL *_URL;
    UIView *_fromView;
    NSURL *_callbackURL;
    GRWLinkOpenerOptions *_openerOptions;
    NSData *_trackingParams;
}

+ (id)eventWithURL:(id)arg1 fromView:(id)arg2 callbackURL:(id)arg3 firstResponder:(id)arg4 shouldResolve:(_Bool)arg5 trackingParams:(id)arg6 openerOptions:(id)arg7;
+ (id)eventWithURL:(id)arg1 fromView:(id)arg2 callbackURL:(id)arg3 firstResponder:(id)arg4 shouldResolve:(_Bool)arg5 trackingParams:(id)arg6;
+ (id)eventWithURL:(id)arg1 fromView:(id)arg2 callbackURL:(id)arg3 firstResponder:(id)arg4 trackingParams:(id)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *trackingParams; // @synthesize trackingParams=_trackingParams;
@property(readonly, nonatomic) GRWLinkOpenerOptions *openerOptions; // @synthesize openerOptions=_openerOptions;
@property(readonly, nonatomic) _Bool shouldResolve; // @synthesize shouldResolve=_shouldResolve;
@property(readonly, nonatomic) NSURL *callbackURL; // @synthesize callbackURL=_callbackURL;
@property(readonly, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)initWithURL:(id)arg1 fromView:(id)arg2 callbackURL:(id)arg3 firstResponder:(id)arg4 shouldResolve:(_Bool)arg5 trackingParams:(id)arg6 openerOptions:(id)arg7;

@end

