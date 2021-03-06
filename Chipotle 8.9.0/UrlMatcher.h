//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class Matcher, NSDictionary;

@interface UrlMatcher : NSObject
{
    NSDictionary *_config;
    Matcher *_schemeMatcher;
    Matcher *_domainMatcher;
    Matcher *_portMatcher;
    Matcher *_pathMatcher;
    Matcher *_queryMatcher;
}

@property(retain, nonatomic) Matcher *queryMatcher; // @synthesize queryMatcher=_queryMatcher;
@property(retain, nonatomic) Matcher *pathMatcher; // @synthesize pathMatcher=_pathMatcher;
@property(retain, nonatomic) Matcher *portMatcher; // @synthesize portMatcher=_portMatcher;
@property(retain, nonatomic) Matcher *domainMatcher; // @synthesize domainMatcher=_domainMatcher;
@property(retain, nonatomic) Matcher *schemeMatcher; // @synthesize schemeMatcher=_schemeMatcher;
- (void)setConfig:(id)arg1;
@property(retain, nonatomic) NSDictionary * y; // @synthesize  y=_config;
- (void).cxx_destruct;
- (_Bool)match:(id)arg1 with:(id)arg2;
- (_Bool)c;
- (id)getPort:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

