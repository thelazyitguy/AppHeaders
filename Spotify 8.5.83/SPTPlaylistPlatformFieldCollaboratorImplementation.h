//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlaylistPlatformFieldCollaborator-Protocol.h"

@class NSString;
@protocol SPTPlaylistPlatformFieldUser;

@interface SPTPlaylistPlatformFieldCollaboratorImplementation : NSObject <SPTPlaylistPlatformFieldCollaborator>
{
    _Bool _isOwner;
    unsigned long long _numberOfEpisodes;
    unsigned long long _numberOfTracks;
    id <SPTPlaylistPlatformFieldUser> _user;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTPlaylistPlatformFieldUser> user; // @synthesize user=_user;
@property(readonly, nonatomic) unsigned long long numberOfTracks; // @synthesize numberOfTracks=_numberOfTracks;
@property(readonly, nonatomic) unsigned long long numberOfEpisodes; // @synthesize numberOfEpisodes=_numberOfEpisodes;
@property(readonly, nonatomic) _Bool isOwner; // @synthesize isOwner=_isOwner;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

