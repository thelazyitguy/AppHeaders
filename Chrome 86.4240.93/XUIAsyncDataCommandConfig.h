//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface XUIAsyncDataCommandConfig : NSObject
{
    NSArray *_authScopes;
    NSDictionary *_headerFields;
    NSArray *_queryItems;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *queryItems; // @synthesize queryItems=_queryItems;
@property(copy, nonatomic) NSDictionary *headerFields; // @synthesize headerFields=_headerFields;
@property(copy, nonatomic) NSArray *authScopes; // @synthesize authScopes=_authScopes;

@end
