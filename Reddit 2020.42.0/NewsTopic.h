//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NewsTopic : NSObject
{
    _Bool _isSelectedByDefault;
    NSString *_name;
    NSString *_topicId;
    NSString *_displayName;
    NSArray *_subtopics;
    NSString *_iconPath;
    unsigned long long _sortOrder;
    NSString *_multiPath;
    NSArray *_allowedPostTypes;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isSelectedByDefault; // @synthesize isSelectedByDefault=_isSelectedByDefault;
@property(copy, nonatomic) NSArray *allowedPostTypes; // @synthesize allowedPostTypes=_allowedPostTypes;
@property(copy, nonatomic) NSString *multiPath; // @synthesize multiPath=_multiPath;
@property(nonatomic) unsigned long long sortOrder; // @synthesize sortOrder=_sortOrder;
@property(copy, nonatomic) NSString *iconPath; // @synthesize iconPath=_iconPath;
@property(copy, nonatomic) NSArray *subtopics; // @synthesize subtopics=_subtopics;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *topicId; // @synthesize topicId=_topicId;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)debugDescription;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithMultiData:(id)arg1;

@end

