//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet, NSString, NSURL, RKMapping, RKPathMatcher;

@interface RKResponseDescriptor : NSObject
{
    RKMapping *_mapping;
    long long _method;
    NSString *_pathPattern;
    NSString *_keyPath;
    NSIndexSet *_statusCodes;
    NSURL *_baseURL;
    RKPathMatcher *_pathPatternMatcher;
}

+ (id)responseDescriptorWithMapping:(id)arg1 method:(long long)arg2 pathPattern:(id)arg3 keyPath:(id)arg4 statusCodes:(id)arg5;
+ (id)responseDescriptorWithMapping:(id)arg1 pathPattern:(id)arg2 keyPath:(id)arg3 statusCodes:(id)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) RKPathMatcher *pathPatternMatcher; // @synthesize pathPatternMatcher=_pathPatternMatcher;
@property(copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSIndexSet *statusCodes; // @synthesize statusCodes=_statusCodes;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(copy, nonatomic) NSString *pathPattern; // @synthesize pathPattern=_pathPattern;
@property(nonatomic) long long method; // @synthesize method=_method;
@property(retain, nonatomic) RKMapping *mapping; // @synthesize mapping=_mapping;
- (_Bool)isEqualToResponseDescriptor:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)parsedArgumentsFromResponse:(id)arg1;
- (_Bool)matchesMethod:(long long)arg1;
- (_Bool)matchesResponse:(id)arg1 parsedArguments:(id *)arg2;
- (_Bool)matchesResponse:(id)arg1;
- (_Bool)matchesURL:(id)arg1 parsedArguments:(id *)arg2;
- (_Bool)matchesURL:(id)arg1;
- (_Bool)matchesPath:(id)arg1 parsedArguments:(id *)arg2;
- (_Bool)matchesPath:(id)arg1;
- (id)description;

@end
