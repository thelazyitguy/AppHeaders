//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWSingleton.h"

@class NSString;

@interface AWAmazonAdPluginConfig : AWSingleton
{
    _Bool adsEnabled;
    NSString *appId;
    NSString *appName;
    NSString *marketplace;
    NSString *_domain;
}

+ (id)adPluginConfig;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) _Bool adsEnabled; // @synthesize adsEnabled;
@property(copy, nonatomic) NSString *marketplace; // @synthesize marketplace;
@property(copy, nonatomic) NSString *appName; // @synthesize appName;
@property(copy, nonatomic) NSString *appId; // @synthesize appId;
- (void).cxx_destruct;
- (void)didChangeMarketplace:(id)arg1;
- (id)init;

@end
