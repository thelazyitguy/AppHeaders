//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DTBGDPREncoder : NSObject
{
}

+ (id)encodedGDPRConsentStringWithVendorList:(id)arg1;
- (void)setBitSetBasedOnMaxVendorId:(id)arg1 maxNumber:(unsigned long long)arg2;
- (void)setBitSetBasedOnConsentType:(id)arg1;
- (void)setBitSetBasedOnCMPFlavor:(id)arg1;
- (void)setBitSetBasedOnConsentStringVersion:(id)arg1;
- (id)getBinaryStringBasedOnPositions:(id)arg1;
- (id)validPaddedStringForInt:(unsigned long long)arg1 withLength:(unsigned long long)arg2;
- (void)unsetBit:(int)arg1 withBytes:(char *)arg2;
- (void)setBit:(int)arg1 withBytes:(char *)arg2;
- (id)dataFromBitSet:(id)arg1;
- (id)encodedBinaryString:(id)arg1;

@end

