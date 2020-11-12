//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface MPIdentityApiRequest : NSObject
{
    NSMutableDictionary *_mutableIdentities;
}

+ (id)requestWithUser:(id)arg1;
+ (id)requestWithEmptyUser;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *mutableIdentities; // @synthesize mutableIdentities=_mutableIdentities;
@property(readonly, nonatomic) NSDictionary *identities;
@property(retain, nonatomic) NSString *customerId;
@property(retain, nonatomic) NSString *email;
- (id)dictionaryRepresentation;
- (void)setIdentity:(id)arg1 identityType:(unsigned long long)arg2;
- (id)init;

@end
