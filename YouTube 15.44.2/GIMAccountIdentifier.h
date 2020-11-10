//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GIMIdentifier.h>

@class NSString;

@interface GIMAccountIdentifier : GIMIdentifier
{
    NSString *_accountIdentifier;
    NSString *_effectiveIdentifier;
}

+ (id)identifierWithAccountIdentifier:(id)arg1 effectiveIdentifier:(id)arg2;
+ (id)identifierWithAccountIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *effectiveIdentifier; // @synthesize effectiveIdentifier=_effectiveIdentifier;
@property(readonly, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

