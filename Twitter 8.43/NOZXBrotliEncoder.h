//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterNetworkUtilities/NOZEncoder-Protocol.h>

@class NSString;

@interface NOZXBrotliEncoder : NSObject <NOZEncoder>
{
}

- (_Bool)finalizeEncoderContext:(id)arg1;
- (_Bool)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 context:(id)arg3;
- (_Bool)initializeEncoderContext:(id)arg1;
- (id)createContextWithBitFlags:(unsigned short)arg1 compressionLevel:(float)arg2 flushCallback:(CDUnknownBlockType)arg3;
- (unsigned short)bitFlagsForEntry:(id)arg1;
- (unsigned long long)defaultCompressionLevel;
- (unsigned long long)numberOfCompressionLevels;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
