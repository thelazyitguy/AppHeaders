//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleAppsBigtopDataCommonClientInfoDependenciesComponent-Protocol.h"
#import "ComGoogleAppsBigtopDataSettingsSettingsConfigComponent-Protocol.h"
#import "ComGoogleCaribouComponentsServerpermidsClientItemServerPermIdGeneratorDependenciesComponent-Protocol.h"
#import "JavaObject-Protocol.h"
#import "XPTHasLifecycle-Protocol.h"

@class ComGoogleAppsBigtopServicesSettingsCommonSettingIdKeyMap, XPTLifecycle;
@protocol ComGoogleAppsBigtopDataSettingsInternalapiSettingsClientInternal, JBTMessageBasedUIFeatureState, JBTSettingFactory;

@protocol ComGoogleAppsBigtopDataSettingsSettingsClientComponent <ComGoogleAppsBigtopDataCommonClientInfoDependenciesComponent, ComGoogleAppsBigtopDataSettingsSettingsConfigComponent, ComGoogleCaribouComponentsServerpermidsClientItemServerPermIdGeneratorDependenciesComponent, XPTHasLifecycle, JavaObject>
- (id <JBTMessageBasedUIFeatureState>)messageBasedUIFeatureState;
- (id <ComGoogleAppsBigtopDataSettingsInternalapiSettingsClientInternal>)getSettingsClientInternal;
- (ComGoogleAppsBigtopServicesSettingsCommonSettingIdKeyMap *)getSettingIdKeyMap;
- (id <JBTSettingFactory>)getSettingFactory;
- (XPTLifecycle *)getLifecycle;
@end
