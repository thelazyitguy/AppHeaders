//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMMPBaseAdapter.h"

#import "AMAHTMLAdViewDelegate-Protocol.h"

@class AMAHTMLAdView, NSString;
@protocol AMMPOpenURLDelegate;

@interface AMMPHTMLAdapter : AMMPBaseAdapter <AMAHTMLAdViewDelegate>
{
    _Bool _testing;
    AMAHTMLAdView *_adView;
    id <AMMPOpenURLDelegate> _openURLDelegate;
}

@property(nonatomic) _Bool testing; // @synthesize testing=_testing;
@property(nonatomic) __weak id <AMMPOpenURLDelegate> openURLDelegate; // @synthesize openURLDelegate=_openURLDelegate;
@property(retain, nonatomic) AMAHTMLAdView *adView; // @synthesize adView=_adView;
- (void).cxx_destruct;
- (void)HTMLView:(id)arg1 failedLoadWithError:(id)arg2;
- (void)webViewDidFinishLoadForHTMLView:(id)arg1;
- (void)openSharedAppURLForHTMLView:(id)arg1;
- (void)openURLForHTMLView:(id)arg1;
- (void)openPrivateURL:(id)arg1 ForHTMLView:(id)arg2;
- (void)rotateToOrientation:(long long)arg1;
- (void)getAdWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
