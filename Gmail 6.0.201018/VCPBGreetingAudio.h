//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSData, NSString;

@interface VCPBGreetingAudio : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *amrWb; // @dynamic amrWb;
@property(nonatomic) _Bool hasAmrWb; // @dynamic hasAmrWb;
@property(nonatomic) _Bool hasM4A; // @dynamic hasM4A;
@property(nonatomic) _Bool hasMp3; // @dynamic hasMp3;
@property(nonatomic) _Bool hasOgg; // @dynamic hasOgg;
@property(nonatomic) _Bool hasVersionToken; // @dynamic hasVersionToken;
@property(nonatomic) _Bool hasWav; // @dynamic hasWav;
@property(nonatomic) _Bool hasWebm; // @dynamic hasWebm;
@property(copy, nonatomic) NSData *m4A; // @dynamic m4A;
@property(copy, nonatomic) NSData *mp3; // @dynamic mp3;
@property(copy, nonatomic) NSData *ogg; // @dynamic ogg;
@property(copy, nonatomic) NSString *versionToken; // @dynamic versionToken;
@property(copy, nonatomic) NSData *wav; // @dynamic wav;
@property(copy, nonatomic) NSData *webm; // @dynamic webm;

@end

