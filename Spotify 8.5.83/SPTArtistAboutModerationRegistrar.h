//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTArtistAboutStateProvider;
@protocol SPTModerationReportDecorationRegistry;

@interface SPTArtistAboutModerationRegistrar : NSObject
{
    SPTArtistAboutStateProvider *_stateProvider;
    id <SPTModerationReportDecorationRegistry> _moderationDecorationRegistry;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTModerationReportDecorationRegistry> moderationDecorationRegistry; // @synthesize moderationDecorationRegistry=_moderationDecorationRegistry;
@property(readonly, nonatomic) SPTArtistAboutStateProvider *stateProvider; // @synthesize stateProvider=_stateProvider;
- (void)unregisterGalleryModerationDecorator;
- (void)registerGalleryModerationDecorator;
- (id)initWithStateProvider:(id)arg1 moderationDecorationRegistry:(id)arg2;

@end
