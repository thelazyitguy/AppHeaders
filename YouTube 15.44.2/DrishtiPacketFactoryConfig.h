//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class DrishtiPacketFactoryOptions, NSString;

@interface DrishtiPacketFactoryConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *externalOutput; // @dynamic externalOutput;
@property(nonatomic) _Bool hasExternalOutput; // @dynamic hasExternalOutput;
@property(nonatomic) _Bool hasOptions; // @dynamic hasOptions;
@property(nonatomic) _Bool hasOutputSidePacket; // @dynamic hasOutputSidePacket;
@property(nonatomic) _Bool hasPacketFactory; // @dynamic hasPacketFactory;
@property(retain, nonatomic) DrishtiPacketFactoryOptions *options; // @dynamic options;
@property(copy, nonatomic) NSString *outputSidePacket; // @dynamic outputSidePacket;
@property(copy, nonatomic) NSString *packetFactory; // @dynamic packetFactory;

@end

