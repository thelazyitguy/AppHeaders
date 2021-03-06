//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSLocale, NSOrderedSet, NSString, NSURL;

@protocol AMIMarketplace <NSObject>
@property(readonly, nonatomic) NSString *languageCodeCookieName;
@property(readonly, nonatomic) NSString *primaryCurrency;
@property(readonly, nonatomic) NSLocale *primaryLocale;
@property(readonly, nonatomic) NSOrderedSet *aisSupportedLocales;
@property(readonly, nonatomic) NSOrderedSet *supportedLocales;
@property(readonly, nonatomic) NSString *betaMarketplaceWeblab;
@property(readonly, nonatomic) NSURL *secureServerURL;
@property(readonly, nonatomic) NSURL *secureWebViewUrl;
@property(readonly, nonatomic) NSString *configDomain;
@property(readonly, nonatomic) _Bool internationalShoppingMode;
@property(readonly, nonatomic) NSString *obfuscatedId;
@property(readonly, nonatomic) NSString *countryName;
@property(readonly, nonatomic) NSString *designator;
@property(readonly, nonatomic) NSString *name;
@end

