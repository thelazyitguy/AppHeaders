//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WalmartCore/NKDBarcode.h>

@interface NKDCode39Barcode : NKDBarcode
{
}

- (void)generateChecksum;
- (_Bool)isContentValid;
- (id)terminator;
- (id)initiator;
- (id)_encodeChar:(BOOL)arg1;
- (id)initWithContent:(id)arg1 printsCaption:(_Bool)arg2;

@end
