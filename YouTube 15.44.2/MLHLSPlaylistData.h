//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MLCondensedURLExpander, MLHLSDGMediaPlaylist, NSData;

@interface MLHLSPlaylistData : NSObject
{
    NSData *_data;
    MLCondensedURLExpander *_expander;
    MLHLSDGMediaPlaylist *_playlist;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) MLHLSDGMediaPlaylist *playlist; // @synthesize playlist=_playlist;
@property(readonly, nonatomic) MLCondensedURLExpander *expander; // @synthesize expander=_expander;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (id)initWithData:(id)arg1 condensedURLExpander:(id)arg2 playlist:(id)arg3;

@end

