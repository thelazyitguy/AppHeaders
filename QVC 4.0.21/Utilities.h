//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface Utilities : NSObject
{
}

+ (id)urlWithNoAlternativeURL:(id)arg1;
+ (id)productNumberFromWebTSVURL:(id)arg1;
+ (id)escapeSpacesAndAmpersands:(id)arg1;
+ (id)returnqCardExpiry;
+ (void)deleteAuthenticatedCookies;
+ (id)caseInsensitiveKeyLookup:(id)arg1 andKey:(id)arg2;
+ (void)updatePriceFroKey:(id)arg1 from:(id)arg2;
+ (id)updatePricesForProductFromArr:(id)arg1;
+ (id)itemWithKeyPath:(id)arg1 within:(id)arg2;
+ (id)followPath:(id)arg1 pathIndex:(long long)arg2 inDictionary:(id)arg3;
+ (_Bool)shouldSetSupressFlag:(id)arg1;
+ (id)findQueryParam:(id)arg1 inUrl:(id)arg2;
+ (id)parsingQueryStringIgnoreEncoding:(id)arg1;
+ (id)parsingQueryString:(id)arg1;
+ (id)machineName;
+ (id)parseRFC3339Date:(id)arg1;
+ (id)getApnsUUID;
+ (id)uuidString;
+ (id)getAuthToken;
+ (void)storeAuthToken:(id)arg1;
+ (id)getUserGlobalIdToken;
+ (void)storeUserGlobalIdToken:(id)arg1;
+ (id)getJWTToken;
+ (void)storeJWTToken:(id)arg1;
+ (id)query:(id)arg1;
+ (id)appendScaleFactorWithURL:(id)arg1;
+ (id)getCurrencyStringForFloat:(float)arg1;
+ (id)getJSONDictionaryArrayFromObject:(id)arg1;
+ (double)SecondsPerDay;
+ (long long)fetchCurrentGMTOffsetInHours;
+ (_Bool)isEmpty:(id)arg1;
+ (struct CGPoint)createPointFromCoordinateString:(id)arg1;
+ (struct CGSize)createSizeFromSizeString:(id)arg1;
+ (id)cleanDirtyString:(id)arg1;
+ (id)getAppVersion;
+ (id)getRefCode;
+ (id)setupHTTPsFor:(id)arg1;

@end

