//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SXRWeblab : NSObject
{
    NSString *_name;
    NSString *_weblabID;
    unsigned long long _defaultTreatment;
    NSDictionary *_supportedTreatments;
}

+ (id)addWeblab:(id)arg1 withID:(id)arg2 treatments:(id)arg3 defaultTreatment:(unsigned long long)arg4;
+ (id)addWeblab:(id)arg1 withID:(id)arg2 treatments:(id)arg3;
+ (id)addWeblab:(id)arg1 withID:(id)arg2;
+ (id)serverWeblabDictionary;
+ (id)nativeWeblabDictionary;
+ (unsigned long long)treatmentFromString:(id)arg1;
+ (id)stringFromTreatment:(unsigned long long)arg1;
+ (id)registeredWeblabs;
+ (id)useISSTemplateCards;
+ (id)useISSTemplate;
+ (id)useAutocompleteForRecentSearches;
+ (id)useApiV2ForRecentSearch;
+ (id)useApiV2ForAutocompleteAndRecentSearch;
+ (id)addISSClientSideMetrics;
+ (id)reactNativeISS;
+ (id)showMenuItemSuggestionsInISS;
+ (id)showCartThresholdToastMessage;
+ (id)showSeeVariationsButton;
+ (id)changeSecondaryTextColor;
+ (id)addTTLForAssetsCaching;
+ (id)showPremiumBrandExperienceWidget;
+ (id)enableMultiscopingWidgetOnTablet;
+ (id)enableAmazonCertifiedCSM;
+ (id)synopsis;
+ (id)showMultiscopingWidget;
+ (id)useStyledType;
+ (id)useISSReftagForPrefetchRequests;
+ (id)showSupplementaryText;
+ (id)useStyledByLine;
+ (id)enableLatencyConfigs;
+ (id)pinFilterMenu;
+ (id)clearAllRefinementsLogicOnServerSide;
+ (id)nextSearchShoveler;
+ (id)enableInstantExperience;
+ (id)twoLineTitles;
+ (id)disableSADForNonFresh;
+ (id)publishCSMMetrics;
+ (id)packardGlobalSubNav;
+ (id)packardExperience;
+ (id)dealBadge;
+ (id)primeFilterInISS;
+ (id)inlineImpulseV2;
+ (void)registerNativeWeblabs;
@property(readonly, nonatomic) NSDictionary *supportedTreatments; // @synthesize supportedTreatments=_supportedTreatments;
@property(readonly, nonatomic) unsigned long long defaultTreatment; // @synthesize defaultTreatment=_defaultTreatment;
@property(readonly, nonatomic) NSString *weblabID; // @synthesize weblabID=_weblabID;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 weblabID:(id)arg2 treatments:(id)arg3 defaultTreatment:(unsigned long long)arg4;
- (void)trigger;
- (unsigned long long)treatmentWithTrigger:(_Bool)arg1;
- (unsigned long long)treatmentNoTrigger;
- (unsigned long long)treatment;
- (_Bool)hasTreatment:(unsigned long long)arg1 withTrigger:(_Bool)arg2;
- (_Bool)hasTreatmentNoTrigger:(unsigned long long)arg1;
- (_Bool)hasTreatment:(unsigned long long)arg1;

@end

