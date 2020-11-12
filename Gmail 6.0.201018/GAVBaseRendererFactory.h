//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GAVRendererFactory-Protocol.h"

@class GAVFileTypes, GAVProjectorConfiguration;
@protocol GAVMovieRendererDelegate, GAVRendererDelegate, GAVSearchRendererDelegate;

@interface GAVBaseRendererFactory : NSObject <GAVRendererFactory>
{
    GAVFileTypes *_fileTypes;
    id <GAVRendererDelegate> _rendererDelegate;
    id <GAVMovieRendererDelegate> _movieRendererDelegate;
    id <GAVSearchRendererDelegate> _searchRendererDelegate;
    GAVProjectorConfiguration *_configuration;
}

+ (_Bool)canUnlockFile:(id)arg1 error:(id)arg2;
+ (_Bool)fileInfoMIMETypeIsRenderable:(id)arg1;
+ (_Bool)fileInfoWillNeverRender:(id)arg1;
+ (_Bool)canStreamAsAudio:(id)arg1;
+ (_Bool)canStreamAsVideo:(id)arg1;
+ (_Bool)hasPreviewMIMETypeForWebView:(id)arg1;
+ (_Bool)canViewWithPDFViewer:(id)arg1;
+ (_Bool)canStreamWithAudioViewer:(id)arg1;
+ (_Bool)canStreamWithVideoViewer:(id)arg1;
+ (_Bool)canViewWithWebView:(id)arg1;
+ (_Bool)hasPreviewMIMETypesForTabbedSpreadSheet:(id)arg1;
+ (_Bool)canRenderTabbedSpreadsheet:(id)arg1;
+ (_Bool)hasPreviewMIMETypeForImage:(id)arg1;
+ (_Bool)canRenderAsImage:(id)arg1;
+ (_Bool)canRenderFileInfo:(id)arg1;
+ (_Bool)canRenderMIMEType:(id)arg1 withExportedMIMEType:(id)arg2;
+ (_Bool)canRenderMIMEType:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) GAVProjectorConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <GAVSearchRendererDelegate> searchRendererDelegate; // @synthesize searchRendererDelegate=_searchRendererDelegate;
@property(nonatomic) __weak id <GAVMovieRendererDelegate> movieRendererDelegate; // @synthesize movieRendererDelegate=_movieRendererDelegate;
@property(nonatomic) __weak id <GAVRendererDelegate> rendererDelegate; // @synthesize rendererDelegate=_rendererDelegate;
@property(retain, nonatomic) GAVFileTypes *fileTypes; // @synthesize fileTypes=_fileTypes;
- (id)viewControllerForFile:(id)arg1 error:(id)arg2;
- (id)viewControllerForFile:(id)arg1;
- (id)initWithFileTypes:(id)arg1 rendererDelegate:(id)arg2 movieRendererDelegate:(id)arg3 searchRendererDelegate:(id)arg4 configuration:(id)arg5;

@end
