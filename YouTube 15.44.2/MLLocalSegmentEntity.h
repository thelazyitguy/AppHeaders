//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class MLLocalStreamEntity, NSString;

@interface MLLocalSegmentEntity : NSManagedObject
{
}

- (id)localSegment;

// Remaining properties
@property(nonatomic) _Bool complete; // @dynamic complete;
@property(nonatomic) double duration; // @dynamic duration;
@property(copy, nonatomic) NSString *filename; // @dynamic filename;
@property(nonatomic) int index; // @dynamic index;
@property(nonatomic) long long size; // @dynamic size;
@property(retain, nonatomic) MLLocalStreamEntity *stream; // @dynamic stream;

@end

