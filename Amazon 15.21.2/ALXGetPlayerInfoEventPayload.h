//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALXEventPayload.h"

@class NSString;
@protocol Optional;

@interface ALXGetPlayerInfoEventPayload : ALXEventPayload
{
    NSString *_audioItemId;
    NSString<Optional> *_screenWidth;
}

@property(retain, nonatomic) NSString<Optional> *screenWidth; // @synthesize screenWidth=_screenWidth;
@property(retain, nonatomic) NSString *audioItemId; // @synthesize audioItemId=_audioItemId;
- (void).cxx_destruct;
- (id)initWithAudioItemId:(id)arg1 screenWidth:(id)arg2;

@end
