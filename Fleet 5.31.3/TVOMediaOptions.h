//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVOMediaOptions : NSObject
{
    scoped_refptr_0271d9ef _audioDevice;
}

@property(readonly, nonatomic) scoped_refptr_0271d9ef audioDevice; // @synthesize audioDevice=_audioDevice;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct AudioMediaOptions coreOptions;
- (id)initWithAudioDevice:(struct AudioDeviceModule *)arg1;

@end

