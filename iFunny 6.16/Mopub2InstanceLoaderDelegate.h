//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/MPAdViewDelegate-Protocol.h>

@class NSString, _TtC15FCAdvertisement20Mopub2InstanceLoader;

@interface Mopub2InstanceLoaderDelegate : NSObject <MPAdViewDelegate>
{
    _TtC15FCAdvertisement20Mopub2InstanceLoader *_loader;
}

- (void).cxx_destruct;
@property(nonatomic) __weak _TtC15FCAdvertisement20Mopub2InstanceLoader *loader; // @synthesize loader=_loader;
- (id)viewControllerForPresentingModalView;
- (void)adView:(id)arg1 didFailToLoadAdWithError:(id)arg2;
- (void)adViewDidLoadAd:(id)arg1 adSize:(struct CGSize)arg2;
- (id)initWithLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
