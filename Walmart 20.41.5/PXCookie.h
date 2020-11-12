//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface PXCookie : NSObject
{
    NSString *_name;
    NSString *_token;
    NSNumber *_ttl;
    NSDate *_ttlFireDate;
}

+ (unsigned long long)cookieLevelFrom:(id)arg1;
@property(retain, nonatomic) NSDate *ttlFireDate; // @synthesize ttlFireDate=_ttlFireDate;
@property(readonly, nonatomic) NSNumber *ttl; // @synthesize ttl=_ttl;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)ttlExpired;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)getFormattedToken;
- (id)initWithName:(id)arg1 token:(id)arg2 ttl:(id)arg3;

@end
