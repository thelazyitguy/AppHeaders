//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSEventsOwnerRemovedEvent.h"

@class DYNSCommonSpaceId, JavaUtilOptional;

@interface DYNSEventsAutoValue_OwnerRemovedEvent : DYNSEventsOwnerRemovedEvent
{
    DYNSCommonSpaceId *getSpaceId_;
    JavaUtilOptional *getSpaceName_;
    _Bool hasLeftSpace_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)hasLeftSpace;
- (id)getSpaceName;
- (id)getSpaceId;

@end
