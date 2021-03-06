//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Airship/NSCoding-Protocol.h>

@class NSDictionary;

@interface UATagGroupsMutation : NSObject <NSCoding>
{
    NSDictionary *_addTagGroups;
    NSDictionary *_removeTagGroups;
    NSDictionary *_setTagGroups;
}

+ (id)prepareTagGroup:(id)arg1;
+ (id)normalizeTagGroup:(id)arg1;
+ (id)collapseMutations:(id)arg1;
+ (id)mutationWithAddTags:(id)arg1 removeTags:(id)arg2;
+ (id)mutationToSetTags:(id)arg1 group:(id)arg2;
+ (id)mutationToRemoveTags:(id)arg1 group:(id)arg2;
+ (id)mutationToAddTags:(id)arg1 group:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *setTagGroups; // @synthesize setTagGroups=_setTagGroups;
@property(copy, nonatomic) NSDictionary *removeTagGroups; // @synthesize removeTagGroups=_removeTagGroups;
@property(copy, nonatomic) NSDictionary *addTagGroups; // @synthesize addTagGroups=_addTagGroups;
- (id)applyToTagGroups:(id)arg1;
- (id)mutableTagSet:(id)arg1;
- (id)payload;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

