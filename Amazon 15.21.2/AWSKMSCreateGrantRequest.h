//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWSRequest.h"

@class AWSKMSGrantConstraints, NSArray, NSString;

@interface AWSKMSCreateGrantRequest : AWSRequest
{
    AWSKMSGrantConstraints *_constraints;
    NSArray *_grantTokens;
    NSString *_granteePrincipal;
    NSString *_keyId;
    NSString *_name;
    NSArray *_operations;
    NSString *_retiringPrincipal;
}

+ (id)constraintsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *retiringPrincipal; // @synthesize retiringPrincipal=_retiringPrincipal;
@property(retain, nonatomic) NSArray *operations; // @synthesize operations=_operations;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *keyId; // @synthesize keyId=_keyId;
@property(retain, nonatomic) NSString *granteePrincipal; // @synthesize granteePrincipal=_granteePrincipal;
@property(retain, nonatomic) NSArray *grantTokens; // @synthesize grantTokens=_grantTokens;
@property(retain, nonatomic) AWSKMSGrantConstraints *constraints; // @synthesize constraints=_constraints;
- (void).cxx_destruct;

@end
