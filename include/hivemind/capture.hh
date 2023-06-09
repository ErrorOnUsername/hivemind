#pragma once

enum CaptureOptions {
	CaptureOptions_ExportCustom = ( 1 << 0 ),
	CaptureOptions_ExoortChrome = ( 1 << 1 ),

	CaptureOptions_TimestampExports = ( 1 << 1 ),

	CaptureOptions_Default = CaptureOptions_ExportCustom
	                       | CaptureOptions_TimestampExports,
};
