//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/VKObject.h>

@class NSNumber;

@interface VKPostSettings : VKObject
{
    NSNumber *_friendsOnly;
    NSNumber *_exportTwitter;
    NSNumber *_exportFacebook;
    NSNumber *_exportLivejournal;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *exportLivejournal; // @synthesize exportLivejournal=_exportLivejournal;
@property(retain, nonatomic) NSNumber *exportFacebook; // @synthesize exportFacebook=_exportFacebook;
@property(retain, nonatomic) NSNumber *exportTwitter; // @synthesize exportTwitter=_exportTwitter;
@property(retain, nonatomic) NSNumber *friendsOnly; // @synthesize friendsOnly=_friendsOnly;

@end
