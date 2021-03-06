//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BMSubtitleMatcher;
@protocol BMPlayerConfiguration;

@interface SPTVideoSubtitleSelectorFactory : NSObject
{
    id <BMPlayerConfiguration> _playerConfiguration;
    BMSubtitleMatcher *_subtitleMatcher;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BMSubtitleMatcher *subtitleMatcher; // @synthesize subtitleMatcher=_subtitleMatcher;
@property(retain, nonatomic) id <BMPlayerConfiguration> playerConfiguration; // @synthesize playerConfiguration=_playerConfiguration;
- (id)createSubtitleSelectorWithAvailableSubtitles:(id)arg1;
- (id)initWithPlayerConfiguration:(id)arg1 subtitleMatcher:(id)arg2;

@end

