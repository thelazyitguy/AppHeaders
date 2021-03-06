//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ServiceCore/NSCopying-Protocol.h>
#import <ServiceCore/NSSecureCoding-Protocol.h>
#import <ServiceCore/SFCActionModel-Protocol.h>

@class NSDictionary, NSMutableArray, NSMutableIndexSet, NSString;

@interface SFCOutputCollection : NSObject <NSSecureCoding, NSCopying, SFCActionModel>
{
    unsigned long long __count;
    NSMutableArray *__storage;
    NSDictionary *__context;
    _Bool __allPropertiesImported;
    NSMutableIndexSet *__remainingIndexes;
    NSObject *_parentObject;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak NSObject *parentObject; // @synthesize parentObject=_parentObject;
- (void).cxx_destruct;
- (void)importAllObjects;
- (void)importObjectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) id lastObject;
@property(readonly, nonatomic) id firstObject;
- (unsigned long long)indexOfObject:(id)arg1;
- (_Bool)containsObject:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
@property(readonly) unsigned long long count;
- (_Bool)isEqualToOutput:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithJSON:(id)arg1 context:(id)arg2;
- (id)transformedValueForIndex:(unsigned long long)arg1 value:(id)arg2;
- (Class)actionModelForIndex:(unsigned long long)arg1 contents:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

