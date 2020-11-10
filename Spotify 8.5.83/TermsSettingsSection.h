//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SettingsSection.h"

@class NSArray, NSString, SPTOneTrustPartnerUserIDLoader, SPTSettingsFeatureProperties, SPTSettingsLogger;

@interface TermsSettingsSection : SettingsSection
{
    NSArray *_cells;
    SPTSettingsLogger *_logger;
    SPTSettingsFeatureProperties *_featureProperties;
    SPTOneTrustPartnerUserIDLoader *_oneTrustPartnerUserIDLoader;
    NSString *_oneTrustPartnerUserID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *oneTrustPartnerUserID; // @synthesize oneTrustPartnerUserID=_oneTrustPartnerUserID;
@property(retain, nonatomic) SPTOneTrustPartnerUserIDLoader *oneTrustPartnerUserIDLoader; // @synthesize oneTrustPartnerUserIDLoader=_oneTrustPartnerUserIDLoader;
@property(retain, nonatomic) SPTSettingsFeatureProperties *featureProperties; // @synthesize featureProperties=_featureProperties;
@property(retain, nonatomic) SPTSettingsLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSArray *cells; // @synthesize cells=_cells;
- (void)didSelectRow:(long long)arg1;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (id)createCellWithIdentifier:(id)arg1 text:(id)arg2;
- (id)createTermAndConditionCellsWithVoiceuiService:(id)arg1;
- (id)initWithSettingsViewController:(id)arg1 voiceuiService:(id)arg2 featureProperties:(id)arg3 logger:(id)arg4 oneTrustPartnerUserIDLoader:(id)arg5;

@end

