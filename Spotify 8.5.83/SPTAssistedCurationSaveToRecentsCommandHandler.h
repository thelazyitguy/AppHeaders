//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBCommandHandler-Protocol.h"

@class NSURL;
@protocol SPTSearchRecentsDataSource;

@interface SPTAssistedCurationSaveToRecentsCommandHandler : NSObject <HUBCommandHandler>
{
    NSURL *_contextURI;
    id <SPTSearchRecentsDataSource> _searchRecentsDataSource;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTSearchRecentsDataSource> searchRecentsDataSource; // @synthesize searchRecentsDataSource=_searchRecentsDataSource;
@property(readonly, nonatomic) NSURL *contextURI; // @synthesize contextURI=_contextURI;
- (void)handleCommand:(id)arg1 event:(id)arg2;
- (id)initWithContextURI:(id)arg1 searchRecentsDataSource:(id)arg2;

@end

