//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BVSort : NSObject
{
    NSString *_sortOption;
    NSString *_sortOrder;
}

@property(retain) NSString *sortOrder; // @synthesize sortOrder=_sortOrder;
@property(retain) NSString *sortOption; // @synthesize sortOption=_sortOption;
- (void).cxx_destruct;
- (id)toParameterString;
- (id)initWithSortOptionString:(id)arg1 sortOrder:(id)arg2;
- (id)initWithSortOption:(id)arg1 sortOrder:(id)arg2;

@end
