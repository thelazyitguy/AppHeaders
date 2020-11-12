//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface LPGroup : NSObject
{
    _Bool _sorted;
    NSString *_name;
    NSString *_fullName;
    NSMutableDictionary *_groups;
    NSMutableArray *_items;
}

+ (id)groupWithName:(id)arg1 items:(id)arg2;
+ (id)groupWithName:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool sorted; // @synthesize sorted=_sorted;
@property(readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) NSMutableDictionary *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)sortItems;
- (id)description;
- (void)dealloc;
- (id)initWithName:(id)arg1 fullName:(id)arg2 groups:(id)arg3 items:(id)arg4;
- (id)initWithName:(id)arg1 fullName:(id)arg2 items:(id)arg3;
- (id)initWithName:(id)arg1 items:(id)arg2;
- (id)initWithName:(id)arg1 fullName:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)init;

@end
