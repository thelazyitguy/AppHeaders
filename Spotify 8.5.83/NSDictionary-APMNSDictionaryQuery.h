//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (APMNSDictionaryQuery)
+ (id)apm_dictionaryWithHttpArgumentsString:(id)arg1;
+ (id)idzk_totalSizeAndCountDictionaryWithSize:(unsigned long long)arg1 andItemCount:(unsigned long long)arg2;
+ (id)hub_dictionaryWithNullableDictionary:(id)arg1;
+ (id)spt_credentialsDictionaryFromCredentials:(id)arg1;
+ (id)spt_sessionStateDictionaryFromSession:(id)arg1;
+ (id)deviceDictionaryWithLocalDevice:(id)arg1 wirelessRouteName:(id)arg2 wirelessRouteType:(long long)arg3 isActive:(_Bool)arg4;
+ (id)deviceDictionaryWithDeviceId:(id)arg1 physicalId:(id)arg2 name:(id)arg3 subtitle:(id)arg4 type:(id)arg5 active:(_Bool)arg6 restricted:(_Bool)arg7 watchPairedDevice:(_Bool)arg8;
+ (id)deviceDictionaryWithLocalDevice:(id)arg1 localDeviceName:(id)arg2 isActive:(_Bool)arg3;
+ (id)deviceDictionaryWithDevice:(id)arg1 isActive:(_Bool)arg2;
+ (id)connectStateDictionaryWithDevices:(id)arg1 activeRemoteDevice:(id)arg2 localDevice:(id)arg3 localDeviceName:(id)arg4 wirelessRouteActive:(_Bool)arg5 wirelessRouteType:(long long)arg6 wirelessRouteName:(id)arg7;
+ (id)spt_recentlyPlayedItemDictionaryWithItem:(id)arg1;
- (id)apm_queryString;
- (id)gck_urlForKey:(id)arg1;
- (id)gck_arrayForKey:(id)arg1;
- (id)gck_dictionaryForKey:(id)arg1;
- (_Bool)gck_boolForKey:(id)arg1;
- (_Bool)gck_boolForKey:(id)arg1 withDefaultValue:(_Bool)arg2;
- (double)gck_doubleForKey:(id)arg1;
- (double)gck_doubleForKey:(id)arg1 withDefaultValue:(double)arg2;
- (unsigned long long)gck_uintegerForKey:(id)arg1;
- (long long)gck_integerForKey:(id)arg1;
- (unsigned long long)gck_uintegerForKey:(id)arg1 withDefaultValue:(unsigned long long)arg2;
- (long long)gck_integerForKey:(id)arg1 withDefaultValue:(long long)arg2;
- (id)gck_stringForKey:(id)arg1;
- (id)gck_stringForKey:(id)arg1 withDefaultValue:(id)arg2;
- (id)gckb_objectForKey:(id)arg1;
- (id)gckb_urlForKey:(id)arg1;
- (id)gckb_arrayForKey:(id)arg1;
- (id)gckb_mutableArrayForKey:(id)arg1;
- (id)gckb_dictionaryForKey:(id)arg1;
- (_Bool)gckb_boolForKey:(id)arg1;
- (_Bool)gckb_boolForKey:(id)arg1 withDefaultValue:(_Bool)arg2;
- (double)gckb_doubleForKey:(id)arg1;
- (double)gckb_doubleForKey:(id)arg1 withDefaultValue:(double)arg2;
- (long long)gckb_longlongForKey:(id)arg1 withDefaultValue:(long long)arg2;
- (long long)gckb_longlongForKey:(id)arg1;
- (unsigned long long)gckb_ulonglongForKey:(id)arg1 withDefaultValue:(unsigned long long)arg2;
- (unsigned long long)gckb_ulonglongForKey:(id)arg1;
- (unsigned long long)gckb_uintegerForKey:(id)arg1;
- (long long)gckb_integerForKey:(id)arg1;
- (unsigned long long)gckb_uintegerForKey:(id)arg1 withDefaultValue:(unsigned long long)arg2;
- (long long)gckb_integerForKey:(id)arg1 withDefaultValue:(long long)arg2;
- (id)gckb_stringForKey:(id)arg1;
- (id)gckb_stringForKey:(id)arg1 withDefaultValue:(id)arg2;
- (id)mp_messagePack:(long long)arg1 error:(id *)arg2;
- (id)mp_messagePack:(long long)arg1;
- (id)mp_messagePack;
- (id)BMW_etchObject;
- (unsigned long long)idzk_itemCount;
- (unsigned long long)idzk_totalFileSize;
- (id)spt_queryParamPromotedID;
- (id)bm_dictionaryForKey:(id)arg1;
- (id)bm_arrayForKey:(id)arg1 withObjectsOfClass:(Class)arg2;
- (id)bm_dateForKey:(id)arg1 withFormatter:(id)arg2;
- (id)bm_SpotifyURIForKey:(id)arg1;
- (id)bm_URLForKey:(id)arg1;
- (id)bm_URLForKeyInternal:(id)arg1;
- (id)bm_stringForKey:(id)arg1;
- (id)bm_numberForKey:(id)arg1;
- (double)bm_doubleForKey:(id)arg1;
- (unsigned long long)bm_unsignedIntegerForKey:(id)arg1;
- (long long)bm_integerForKey:(id)arg1;
- (_Bool)bm_boolForKey:(id)arg1;
- (id)bm_transformedObjectsFromArrayForKey:(id)arg1 withObjectsOfClass:(Class)arg2 transformationBlock:(CDUnknownBlockType)arg3;
- (id)bm_transformedObjectsFromDictionaryArrayForKey:(id)arg1 transformationBlock:(CDUnknownBlockType)arg2;
- (id)bm_transformedObjectFromDictionaryForKey:(id)arg1 transformationBlock:(CDUnknownBlockType)arg2;
- (id)bm_dictionaryByRemovingKeys:(id)arg1;
- (id)bm_dictionaryBySettingObject:(id)arg1 forKey:(id)arg2;
- (id)bm_dictionaryByAdding:(id)arg1;
- (id)encore_diff:(id)arg1;
- (id)hub_transformedObjectsFromArrayForKey:(id)arg1 withObjectsOfClass:(Class)arg2;
- (id)hub_dictionaryForKey:(id)arg1;
- (id)hub_arrayForKey:(id)arg1 withObjectsOfClass:(Class)arg2;
- (id)hub_URLForKey:(id)arg1;
- (id)hub_stringForKey:(id)arg1;
- (id)hugs_accessibilityValueForKey:(id)arg1 groupName:(id)arg2;
- (void)hugs_applyAccessibilityDataForGroupName:(id)arg1 toComponentView:(id)arg2;
- (void)hugs_applyMainAccessibilityDataToComponentView:(id)arg1;
- (id)hugs_accessibilityHintForGroupName:(id)arg1;
- (id)hugs_accessibilityLabelForGroupName:(id)arg1;
- (id)hugs_mainAccessibilityHint;
- (id)hugs_mainAccessibilityLabel;
- (id)hugs_dictionaryForKey:(id)arg1;
- (id)hugs_arrayForKey:(id)arg1 withObjectsOfClass:(Class)arg2;
- (id)hugs_dateForKey:(id)arg1 withFormatter:(id)arg2;
- (id)hugs_SpotifyURIForKey:(id)arg1;
- (id)hugs_URLForKey:(id)arg1;
- (id)hugs_URLForKeyInternal:(id)arg1;
- (id)hugs_stringForKey:(id)arg1;
- (id)hugs_numberForKey:(id)arg1;
- (double)hugs_doubleForKey:(id)arg1;
- (unsigned long long)hugs_unsignedIntegerForKey:(id)arg1;
- (long long)hugs_integerForKey:(id)arg1;
- (_Bool)hugs_boolForKey:(id)arg1;
- (id)hugs_transformedObjectsFromArrayForKey:(id)arg1 withObjectsOfClass:(Class)arg2 transformationBlock:(CDUnknownBlockType)arg3;
- (id)hugs_transformedObjectsFromDictionaryArrayForKey:(id)arg1 transformationBlock:(CDUnknownBlockType)arg2;
- (id)hugs_transformedObjectFromDictionaryForKey:(id)arg1 transformationBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)spt_premiumDestinationCacheTTLFromHTTPResponseHeaders;
- (id)spt_premiumDestinationGradientDirectionValue;
- (id)spt_premiumDestinationGradientColorArray;
- (id)spt_premiumDestinationGradientStyle;
- (id)spt_benefitsChart;
- (id)spt_benefitsList;
- (unsigned long long)spt_premiumDestinationUICacheTTLFromHTTPResponseHeaders;
- (id)spt_premiumDestinationUIGradientDirectionValue;
- (id)spt_premiumDestinationUIGradientColorArray;
- (id)spt_premiumDestinationUIGradientStyle;
- (id)sp_stringRepresentation;
- (id)sp_dataRepresentation;
- (id)sp_URLArrayForKey:(id)arg1;
- (id)sp_URLForKey:(id)arg1;
- (_Bool)sp_boolForKey:(id)arg1;
- (long long)sp_integerForKey:(id)arg1;
- (id)sp_stringForKey:(id)arg1;
- (id)sp_dateObjectForKey:(id)arg1;
- (id)sp_objectForKey:(id)arg1;
@property(readonly, nonatomic, getter=spt_byteSizeOfHeaders) long long byteSizeOfHeaders;
- (id)spt_targetURIFromCustomData;
- (id)spt_dictionaryForKey:(id)arg1;
- (id)spt_arrayForKey:(id)arg1 withObjectsOfClass:(Class)arg2;
- (id)spt_dateForKey:(id)arg1 withFormatter:(id)arg2;
- (id)spt_SpotifyURIForKey:(id)arg1;
- (id)spt_URLForKey:(id)arg1;
- (id)spt_URLForKeyInternal:(id)arg1;
- (id)spt_stringForKey:(id)arg1;
- (id)spt_numberForKey:(id)arg1;
- (double)spt_doubleForKey:(id)arg1;
- (unsigned long long)spt_unsignedIntegerForKey:(id)arg1;
- (long long)spt_integerForKey:(id)arg1;
- (_Bool)spt_boolForKey:(id)arg1;
- (id)spt_transformedObjectsFromArrayForKey:(id)arg1 withObjectsOfClass:(Class)arg2 transformationBlock:(CDUnknownBlockType)arg3;
- (id)spt_transformedObjectsFromDictionaryArrayForKey:(id)arg1 transformationBlock:(CDUnknownBlockType)arg2;
- (id)spt_transformedObjectFromDictionaryForKey:(id)arg1 transformationBlock:(CDUnknownBlockType)arg2;
- (id)spt_dictionaryByRemovingKeys:(id)arg1;
- (id)spt_dictionaryByFilteringNSNullValues;
- (id)spt_dictionaryBySettingObject:(id)arg1 forKey:(id)arg2;
- (id)spt_dictionaryByAdding:(id)arg1;
@end

