//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFSModel-Protocol.h>

@class NSArray;

@interface TFNTwitterStatuses : NSObject <TFSModel>
{
    NSArray *_statusesArray;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *statusesArray; // @synthesize statusesArray=_statusesArray;
- (id)initWithStatusesArray:(id)arg1;
- (id)init;

@end
