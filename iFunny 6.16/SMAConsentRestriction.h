//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface SMAConsentRestriction : NSObject
{
    NSNumber *_purposeID;
    unsigned long long _restrictionType;
    NSString *_entries;
}

@property(retain, nonatomic) NSString *entries; // @synthesize entries=_entries;
@property(nonatomic) unsigned long long restrictionType; // @synthesize restrictionType=_restrictionType;
@property(retain, nonatomic) NSNumber *purposeID; // @synthesize purposeID=_purposeID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithPurposeID:(id)arg1 restrictionType:(unsigned long long)arg2 andEntries:(id)arg3;

@end
