//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFNetworkResponseMappable-Protocol.h>

@class NSArray;

@interface FNROChannels : NSObject <IFNetworkResponseMappable>
{
    NSArray *_channels;
}

+ (id)objectMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *channels; // @synthesize channels=_channels;

@end
