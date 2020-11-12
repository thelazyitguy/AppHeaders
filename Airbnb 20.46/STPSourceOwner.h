//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "STPAPIResponseDecodable-Protocol.h"

@class NSDictionary, NSString, STPAddress;

@interface STPSourceOwner : NSObject <STPAPIResponseDecodable>
{
    STPAddress *_address;
    NSString *_email;
    NSString *_name;
    NSString *_phone;
    STPAddress *_verifiedAddress;
    NSString *_verifiedEmail;
    NSString *_verifiedName;
    NSString *_verifiedPhone;
    NSDictionary *_allResponseFields;
}

+ (id)decodedObjectFromAPIResponse:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *allResponseFields; // @synthesize allResponseFields=_allResponseFields;
@property(retain, nonatomic) NSString *verifiedPhone; // @synthesize verifiedPhone=_verifiedPhone;
@property(retain, nonatomic) NSString *verifiedName; // @synthesize verifiedName=_verifiedName;
@property(retain, nonatomic) NSString *verifiedEmail; // @synthesize verifiedEmail=_verifiedEmail;
@property(retain, nonatomic) STPAddress *verifiedAddress; // @synthesize verifiedAddress=_verifiedAddress;
@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) STPAddress *address; // @synthesize address=_address;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
