//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/SMAVastMacrosInfoGettingDelegate-Protocol.h>

@class NSString, SMAAdBreakInfoMacros, SMACapabilitiesInfoMacros, SMAClickInfoMacros, SMAClientInfoMacros, SMAErrorInfoMacros, SMAGenericMacros, SMAPlayerStateInfoMacros, SMAPublisherInfoMacros, SMARegulationInfoMacros, SMAVerificationInfoMacros;
@protocol SMAAdPrivacyPolicy, SMAVastMacrosDataProviding;

@interface SMAVastMacrosInfo : NSObject <SMAVastMacrosInfoGettingDelegate>
{
    SMAGenericMacros *_genericMacros;
    SMAAdBreakInfoMacros *_adBreakInfoMacros;
    SMAClientInfoMacros *_clientInfoMacros;
    SMAPublisherInfoMacros *_publisherInfoMacros;
    SMACapabilitiesInfoMacros *_capabilitiesInfoMacros;
    SMAPlayerStateInfoMacros *_playerStateInfoMacros;
    SMAClickInfoMacros *_clickInfoMacros;
    SMAErrorInfoMacros *_errorInfoMacros;
    SMAVerificationInfoMacros *_verificationInfoMacros;
    SMARegulationInfoMacros *_regulationInfoMacros;
    id <SMAAdPrivacyPolicy> _privacyPolicy;
    id <SMAVastMacrosDataProviding> _macrosDataProvider;
}

@property(retain, nonatomic) id <SMAVastMacrosDataProviding> macrosDataProvider; // @synthesize macrosDataProvider=_macrosDataProvider;
@property(retain, nonatomic) id <SMAAdPrivacyPolicy> privacyPolicy; // @synthesize privacyPolicy=_privacyPolicy;
@property(retain, nonatomic) SMARegulationInfoMacros *regulationInfoMacros; // @synthesize regulationInfoMacros=_regulationInfoMacros;
@property(retain, nonatomic) SMAVerificationInfoMacros *verificationInfoMacros; // @synthesize verificationInfoMacros=_verificationInfoMacros;
@property(retain, nonatomic) SMAErrorInfoMacros *errorInfoMacros; // @synthesize errorInfoMacros=_errorInfoMacros;
@property(retain, nonatomic) SMAClickInfoMacros *clickInfoMacros; // @synthesize clickInfoMacros=_clickInfoMacros;
@property(retain, nonatomic) SMAPlayerStateInfoMacros *playerStateInfoMacros; // @synthesize playerStateInfoMacros=_playerStateInfoMacros;
@property(retain, nonatomic) SMACapabilitiesInfoMacros *capabilitiesInfoMacros; // @synthesize capabilitiesInfoMacros=_capabilitiesInfoMacros;
@property(retain, nonatomic) SMAPublisherInfoMacros *publisherInfoMacros; // @synthesize publisherInfoMacros=_publisherInfoMacros;
@property(retain, nonatomic) SMAClientInfoMacros *clientInfoMacros; // @synthesize clientInfoMacros=_clientInfoMacros;
@property(retain, nonatomic) SMAAdBreakInfoMacros *adBreakInfoMacros; // @synthesize adBreakInfoMacros=_adBreakInfoMacros;
@property(retain, nonatomic) SMAGenericMacros *genericMacros; // @synthesize genericMacros=_genericMacros;
- (void).cxx_destruct;
- (void)useReason:(id)arg1;
- (void)useAdType:(id)arg1;
- (void)useAdCategories:(id)arg1;
- (void)useBlockedAdCategories:(id)arg1;
- (void)useUniversalAdId:(id)arg1;
- (void)useAdServingId:(id)arg1;
- (void)useIsMuted:(_Bool)arg1;
- (void)useClickPositionY:(double)arg1;
- (void)useClickPositionX:(double)arg1;
- (void)useErrorCode:(long long)arg1;
- (void)useAssetURL:(id)arg1;
- (id)videoOffsetFromTimeInterval:(double)arg1;
- (void)useTimeOffset:(double)arg1;
- (void)fillProperties;
- (id)initWithPrivacyPolicy:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
