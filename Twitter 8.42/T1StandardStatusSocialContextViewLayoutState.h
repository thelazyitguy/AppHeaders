//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNComposableViewLayoutState.h>

#import <T1Twitter/T1SocialContextLayoutState-Protocol.h>

@class NSString;

@interface T1StandardStatusSocialContextViewLayoutState : TFNComposableViewLayoutState <T1SocialContextLayoutState>
{
    _Bool _socialTextMultipleLines;
    _Bool _socialTextMaxLinesExceeded;
    NSString *_socialText;
    struct CGRect _socialBadgeFrame;
    struct CGRect _socialTextFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *socialText; // @synthesize socialText=_socialText;
@property(nonatomic, getter=isSocialTextMaxLinesExceeded) _Bool socialTextMaxLinesExceeded; // @synthesize socialTextMaxLinesExceeded=_socialTextMaxLinesExceeded;
@property(nonatomic, getter=isSocialTextMultipleLines) _Bool socialTextMultipleLines; // @synthesize socialTextMultipleLines=_socialTextMultipleLines;
@property(nonatomic) struct CGRect socialTextFrame; // @synthesize socialTextFrame=_socialTextFrame;
@property(nonatomic) struct CGRect socialBadgeFrame; // @synthesize socialBadgeFrame=_socialBadgeFrame;
@property(readonly, nonatomic) struct CGRect caretButtonFrame;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long socialTextAlignment;
@property(readonly) Class superclass;

@end

