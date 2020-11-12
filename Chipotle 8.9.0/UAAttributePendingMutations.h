//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Airship/NSCoding-Protocol.h>

@class NSArray;

@interface UAAttributePendingMutations : NSObject <NSCoding>
{
    NSArray *_mutationsPayload;
}

+ (id)collapseMutationsArray:(id)arg1;
+ (id)collapseMutations:(id)arg1;
+ (id)mutationsPayload:(id)arg1 timestampedWithDate:(id)arg2;
+ (id)pendingMutationsWithMutations:(id)arg1 date:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *mutationsPayload; // @synthesize mutationsPayload=_mutationsPayload;
- (id)payload;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToPendingMutations:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPendingMutationsPayload:(id)arg1;
- (id)initWithMutations:(id)arg1 date:(id)arg2;

@end
