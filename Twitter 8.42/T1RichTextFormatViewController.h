//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

@class NSString, TFNRichTextFormatView;

@interface T1RichTextFormatViewController : TFNViewController
{
    NSString *_documentPath;
    TFNRichTextFormatView *_textView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TFNRichTextFormatView *textView; // @synthesize textView=_textView;
@property(copy, nonatomic) NSString *documentPath; // @synthesize documentPath=_documentPath;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_t1_updateDynamicColors;
- (void)loadView;
- (id)initWithRichTextFormatDocumentPath:(id)arg1;

@end
