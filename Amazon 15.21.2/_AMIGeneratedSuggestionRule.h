//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _AMIGeneratedSuggestionRule : NSObject
{
    NSString *_suggestedMarketplaceObfId;
    NSString *_lowConfidentSuggestion;
    NSString *_type;
    NSString *_comment;
    NSString *_countryCode;
    NSString *_languageCode;
}

@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *lowConfidentSuggestion; // @synthesize lowConfidentSuggestion=_lowConfidentSuggestion;
@property(retain, nonatomic) NSString *suggestedMarketplaceObfId; // @synthesize suggestedMarketplaceObfId=_suggestedMarketplaceObfId;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *localeKey;
- (id)init;

@end
