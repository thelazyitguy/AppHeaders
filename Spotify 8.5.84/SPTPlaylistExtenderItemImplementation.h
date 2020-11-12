//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlaylistExtenderItem-Protocol.h"

@class NSString, NSURL;

@interface SPTPlaylistExtenderItemImplementation : NSObject <SPTPlaylistExtenderItem>
{
    _Bool _ratedExplicit;
    _Bool _is19PlusOnly;
    NSString *_artistName;
    NSURL *_artistURL;
    NSString *_albumName;
    NSURL *_albumURL;
    NSString *_title;
    NSURL *_trackURL;
    NSURL *_imageURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool is19PlusOnly; // @synthesize is19PlusOnly=_is19PlusOnly;
@property(readonly, nonatomic, getter=isRatedExplicit) _Bool ratedExplicit; // @synthesize ratedExplicit=_ratedExplicit;
@property(readonly, copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSURL *trackURL; // @synthesize trackURL=_trackURL;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSURL *albumURL; // @synthesize albumURL=_albumURL;
@property(readonly, copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(readonly, copy, nonatomic) NSURL *artistURL; // @synthesize artistURL=_artistURL;
@property(readonly, copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isPremiumOnly) _Bool premiumOnly;
- (_Bool)isLocalTrack;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
- (id)offlineURL;
- (id)previewURL;
- (long long)icon;
@property(readonly, copy, nonatomic) NSString *subtitle;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
